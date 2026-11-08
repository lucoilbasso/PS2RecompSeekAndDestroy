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

// Function: entry_001c1f80
// Address: 0x1c1f80 - 0x1c1fd8
void entry_001c1f80_0x1c1f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1f80_0x1c1f80");
#endif

    switch (ctx->pc) {
        case 0x1c1facu: goto label_1c1fac;
        default: break;
    }

    ctx->pc = 0x1c1f80u;

    // 0x1c1f80: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1c1f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1c1f84: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1c1f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1c1f88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c1f8c: 0x22f02  srl         $a1, $v0, 28
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1c1f90: 0x2642dcc0  addiu       $v0, $s2, -0x2340
    ctx->pc = 0x1c1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958272));
    // 0x1c1f94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1c1f94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c1f98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c1f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c1fa4: 0xc0706ee  jal         func_1C1BB8
    ctx->pc = 0x1C1FA4u;
    SET_GPR_U32(ctx, 31, 0x1C1FACu);
    ctx->pc = 0x1C1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FA4u;
    // 0x1c1fa8: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BB8u, 0x1C1FA4u, 0x1C1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FACu;
label_1c1fac:
    // 0x1c1fac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c1facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c1fb0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c1fb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c1fb4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1c1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c1fb8: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x1c1fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x1c1fbc: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x1c1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x1c1fc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1fc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1fc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FD0u;
        // 0x1c1fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FD8u;
}
