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

// Function: Init__6WcPostP8WcMulobj
// Address: 0x1961b8 - 0x19620c
void Init__6WcPostP8WcMulobj_0x1961b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__6WcPostP8WcMulobj_0x1961b8");
#endif

    switch (ctx->pc) {
        case 0x1961d4u: goto label_1961d4;
        default: break;
    }

    ctx->pc = 0x1961b8u;

    // 0x1961b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1961b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1961bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1961bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1961c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1961c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1961c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1961c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1961c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1961cc: 0xc064e54  jal         func_193950
    ctx->pc = 0x1961CCu;
    SET_GPR_U32(ctx, 31, 0x1961D4u);
    ctx->pc = 0x1961D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961CCu;
    // 0x1961d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193950u, 0x1961CCu, 0x1961D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961D4u;
label_1961d4:
    // 0x1961d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1961d8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1961d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1961dc: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1961e0: 0x24040346  addiu       $a0, $zero, 0x346
    ctx->pc = 0x1961e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    // 0x1961e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1961e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1961e8: 0xae1101b0  sw          $s1, 0x1B0($s0)
    ctx->pc = 0x1961e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 17));
    // 0x1961ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1961ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1961f0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1961f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1961f4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1961f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1961f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1961f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1961fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1961fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196204: 0x3e00008  jr          $ra
    ctx->pc = 0x196204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196204u;
        // 0x196208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19620Cu;
}
