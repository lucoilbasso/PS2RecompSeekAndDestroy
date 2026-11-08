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

// Function: entry_00164a08
// Address: 0x164a08 - 0x164a64
void entry_00164a08_0x164a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a08_0x164a08");
#endif

    switch (ctx->pc) {
        case 0x164a28u: goto label_164a28;
        case 0x164a38u: goto label_164a38;
        default: break;
    }

    ctx->pc = 0x164a08u;

    // 0x164a08: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x164a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a0c: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x164a10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x164a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a14: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x164a14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164a18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x164a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a1c: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x164a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x164a20: 0xc058ff6  jal         func_163FD8
    ctx->pc = 0x164A20u;
    SET_GPR_U32(ctx, 31, 0x164A28u);
    ctx->pc = 0x164A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A20u;
    // 0x164a24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FD8u, 0x164A20u, 0x164A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A28u;
label_164a28:
    // 0x164a28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x164a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a30: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x164A30u;
    SET_GPR_U32(ctx, 31, 0x164A38u);
    ctx->pc = 0x164A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A30u;
    // 0x164a34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x164A30u, 0x164A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A38u;
label_164a38:
    // 0x164a38: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x164a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x164a3c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x164a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x164a40: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x164a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164a44: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x164a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x164a48: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x164a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x164a4c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x164a4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x164a50: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x164a50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x164a54: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x164a54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x164a58: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x164a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x164a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x164A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A5Cu;
        // 0x164a60: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164A64u;
}
