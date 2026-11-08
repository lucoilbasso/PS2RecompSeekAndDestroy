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

// Function: WSndStdCreate__Fv
// Address: 0x17abb0 - 0x17ac04
void WSndStdCreate__Fv_0x17abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSndStdCreate__Fv_0x17abb0");
#endif

    switch (ctx->pc) {
        case 0x17abc4u: goto label_17abc4;
        case 0x17abccu: goto label_17abcc;
        case 0x17abe4u: goto label_17abe4;
        case 0x17abf0u: goto label_17abf0;
        default: break;
    }

    ctx->pc = 0x17abb0u;

    // 0x17abb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17abb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17abb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17abb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17abb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17abbc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17ABBCu;
    SET_GPR_U32(ctx, 31, 0x17ABC4u);
    ctx->pc = 0x17ABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABBCu;
    // 0x17abc0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17ABBCu, 0x17ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABC4u;
label_17abc4:
    // 0x17abc4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17ABC4u;
    SET_GPR_U32(ctx, 31, 0x17ABCCu);
    ctx->pc = 0x17ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABC4u;
    // 0x17abc8: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17ABC4u, 0x17ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABCCu;
label_17abcc:
    // 0x17abcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17abccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abd0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17abd4: 0x2442fa98  addiu       $v0, $v0, -0x568
    ctx->pc = 0x17abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965912));
    // 0x17abd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17abd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abdc: 0xc05eb02  jal         func_17AC08
    ctx->pc = 0x17ABDCu;
    SET_GPR_U32(ctx, 31, 0x17ABE4u);
    ctx->pc = 0x17ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABDCu;
    // 0x17abe0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC08u, 0x17ABDCu, 0x17ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABE4u;
label_17abe4:
    // 0x17abe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17abe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abe8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x17ABE8u;
    SET_GPR_U32(ctx, 31, 0x17ABF0u);
    ctx->pc = 0x17ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABE8u;
    // 0x17abec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x17ABE8u, 0x17ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABF0u;
label_17abf0:
    // 0x17abf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17abf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17abf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17abf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17abf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17abfc: 0x3e00008  jr          $ra
    ctx->pc = 0x17ABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABFCu;
        // 0x17ac00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ABFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AC04u;
}
