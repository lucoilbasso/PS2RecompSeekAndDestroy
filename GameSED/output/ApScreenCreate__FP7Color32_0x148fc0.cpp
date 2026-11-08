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

// Function: ApScreenCreate__FP7Color32
// Address: 0x148fc0 - 0x149018
void ApScreenCreate__FP7Color32_0x148fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApScreenCreate__FP7Color32_0x148fc0");
#endif

    switch (ctx->pc) {
        case 0x148fe0u: goto label_148fe0;
        default: break;
    }

    ctx->pc = 0x148fc0u;

    // 0x148fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x148fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148fc8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x148fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x148fcc: 0x261026c0  addiu       $s0, $s0, 0x26C0
    ctx->pc = 0x148fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9920));
    // 0x148fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x148fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148fd8: 0xc06256e  jal         func_1895B8
    ctx->pc = 0x148FD8u;
    SET_GPR_U32(ctx, 31, 0x148FE0u);
    ctx->pc = 0x148FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FD8u;
    // 0x148fdc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1895B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1895B8u, 0x148FD8u, 0x148FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FE0u;
label_148fe0:
    // 0x148fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148fe4: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x148fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x148fe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x148fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fec: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x148fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x148ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148ff4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x148ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148ff8: 0x248476f8  addiu       $a0, $a0, 0x76F8
    ctx->pc = 0x148ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30456));
    // 0x148ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x148ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149000: 0xae030370  sw          $v1, 0x370($s0)
    ctx->pc = 0x149000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 3));
    // 0x149004: 0xacb0015c  sw          $s0, 0x15C($a1)
    ctx->pc = 0x149004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 16));
    // 0x149008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14900c: 0xaca40158  sw          $a0, 0x158($a1)
    ctx->pc = 0x14900cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 4));
    // 0x149010: 0x3e00008  jr          $ra
    ctx->pc = 0x149010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149010u;
        // 0x149014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149018u;
}
