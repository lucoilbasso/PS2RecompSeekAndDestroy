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

// Function: viBufIsActive
// Address: 0x175ac0 - 0x175b00
void viBufIsActive_0x175ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufIsActive_0x175ac0");
#endif

    switch (ctx->pc) {
        case 0x175adcu: goto label_175adc;
        case 0x175ae8u: goto label_175ae8;
        default: break;
    }

    ctx->pc = 0x175ac0u;

    // 0x175ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175acc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175ad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175ad4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175AD4u;
    SET_GPR_U32(ctx, 31, 0x175ADCu);
    ctx->pc = 0x175AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AD4u;
    // 0x175ad8: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175AD4u, 0x175ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175ADCu;
label_175adc:
    // 0x175adc: 0x8e110044  lw          $s1, 0x44($s0)
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x175ae0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175AE0u;
    SET_GPR_U32(ctx, 31, 0x175AE8u);
    ctx->pc = 0x175AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AE0u;
    // 0x175ae4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175AE0u, 0x175AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AE8u;
label_175ae8:
    // 0x175ae8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x175ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175af8: 0x3e00008  jr          $ra
    ctx->pc = 0x175AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AF8u;
        // 0x175afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175B00u;
}
