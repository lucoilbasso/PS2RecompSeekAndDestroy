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

// Function: caseD_18
// Address: 0x133c18 - 0x133c44
void caseD_18_0x133c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x133c18");
#endif

    switch (ctx->pc) {
        case 0x133c3cu: goto label_133c3c;
        default: break;
    }

    ctx->pc = 0x133c18u;

    // 0x133c18: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x133c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x133c1c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x133c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x133c20: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x133c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x133c24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x133c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133c28: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x133c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x133c2c: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x133C2Cu;
    {
        const bool branch_taken_0x133c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x133C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C2Cu;
        // 0x133c30: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c2c) {
            ctx->pc = 0x133C44u;
            return;
        }
    }
    ctx->pc = 0x133C34u;
    // 0x133c34: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x133C34u;
    SET_GPR_U32(ctx, 31, 0x133C3Cu);
    ctx->pc = 0x133C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C34u;
    // 0x133c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133C34u, 0x133C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C3Cu;
label_133c3c:
    // 0x133c3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x133c3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x133c40: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x133c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->pc = 0x133c44u;
}
