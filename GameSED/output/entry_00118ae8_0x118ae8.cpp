#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00118ae8
// Address: 0x118ae8 - 0x118b24
void entry_00118ae8_0x118ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118ae8_0x118ae8");
#endif

    switch (ctx->pc) {
        case 0x118af4u: goto label_118af4;
        case 0x118b00u: goto label_118b00;
        default: break;
    }

    ctx->pc = 0x118ae8u;

    // 0x118ae8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x118ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x118aec: 0xc04632a  jal         func_118CA8
    ctx->pc = 0x118AECu;
    SET_GPR_U32(ctx, 31, 0x118AF4u);
    ctx->pc = 0x118AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AECu;
    // 0x118af0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CA8u, 0x118AECu, 0x118AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AF4u;
label_118af4:
    // 0x118af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118af8: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x118AF8u;
    SET_GPR_U32(ctx, 31, 0x118B00u);
    ctx->pc = 0x118AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AF8u;
    // 0x118afc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x118AF8u, 0x118B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B00u;
label_118b00:
    // 0x118b00: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x118b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x118b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118b08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x118b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x118b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118b10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118b14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118b18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x118b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x118B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B1Cu;
        // 0x118b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B24u;
}
