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

// Function: caseD_1
// Address: 0x163950 - 0x163998
void caseD_1_0x163950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x163950");
#endif

    switch (ctx->pc) {
        case 0x163970u: goto label_163970;
        case 0x16398cu: goto label_16398c;
        default: break;
    }

    ctx->pc = 0x163950u;

    // 0x163950: 0x265001f0  addiu       $s0, $s2, 0x1F0
    ctx->pc = 0x163950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x163954: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x163954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x163958: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16395c: 0x8e450264  lw          $a1, 0x264($s2)
    ctx->pc = 0x16395cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x163960: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x163960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x163964: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x163964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x163968: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x163968u;
    SET_GPR_U32(ctx, 31, 0x163970u);
    ctx->pc = 0x16396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163968u;
    // 0x16396c: 0x8e460274  lw          $a2, 0x274($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x163968u, 0x163970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163970u;
label_163970:
    // 0x163970: 0x8e450260  lw          $a1, 0x260($s2)
    ctx->pc = 0x163970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x163974: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x163974u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163978: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x163978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16397c: 0x8e460270  lw          $a2, 0x270($s2)
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x163980: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x163980u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x163984: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x163984u;
    SET_GPR_U32(ctx, 31, 0x16398Cu);
    ctx->pc = 0x163988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163984u;
    // 0x163988: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x163984u, 0x16398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16398Cu;
label_16398c:
    // 0x16398c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x16398Cu;
    {
        const bool branch_taken_0x16398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16398Cu;
        // 0x163990: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16398c) {
            ctx->pc = 0x163B94u;
            return;
        }
    }
    ctx->pc = 0x163994u;
    // 0x163994: 0x0  nop
    ctx->pc = 0x163994u;
    // NOP
    ctx->pc = 0x163998u;
}
