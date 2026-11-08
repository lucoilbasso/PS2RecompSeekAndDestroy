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

// Function: sceGsSetDefAlphaEnv
// Address: 0x1ab178 - 0x1ab1d4
void sceGsSetDefAlphaEnv_0x1ab178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetDefAlphaEnv_0x1ab178");
#endif

    ctx->pc = 0x1ab178u;

    // 0x1ab178: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1ab178u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1ab17c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1ab17cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1ab180: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1ab180u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1ab184: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1ab184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1ab188: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1ab188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1ab18c: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x1ab18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1ab190: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ab190u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ab194: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x1ab194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1ab198: 0x24070081  addiu       $a3, $zero, 0x81
    ctx->pc = 0x1ab198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1ab19c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1ab19cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1ab1a0: 0x34e7807f  ori         $a3, $a3, 0x807F
    ctx->pc = 0x1ab1a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32895);
    // 0x1ab1a4: 0x2408004a  addiu       $t0, $zero, 0x4A
    ctx->pc = 0x1ab1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1ab1a8: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ab1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ab1ac: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ab1acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ab1b0: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x1ab1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x1ab1b4: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1ab1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1ab1b8: 0xfc860028  sd          $a2, 0x28($a0)
    ctx->pc = 0x1ab1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 6));
    // 0x1ab1bc: 0xfc870020  sd          $a3, 0x20($a0)
    ctx->pc = 0x1ab1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 7));
    // 0x1ab1c0: 0xfc880038  sd          $t0, 0x38($a0)
    ctx->pc = 0x1ab1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 8));
    // 0x1ab1c4: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x1ab1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x1ab1c8: 0xf  sync
    ctx->pc = 0x1ab1c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ab1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1CCu;
        // 0x1ab1d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB1D4u;
}
