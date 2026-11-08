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

// Function: setD3_CHCR
// Address: 0x175030 - 0x175094
void setD3_CHCR_0x175030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD3_CHCR_0x175030");
#endif

    switch (ctx->pc) {
        case 0x175044u: goto label_175044;
        default: break;
    }

    ctx->pc = 0x175030u;

    // 0x175030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17503c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x17503Cu;
    SET_GPR_U32(ctx, 31, 0x175044u);
    ctx->pc = 0x175040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17503Cu;
    // 0x175040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x17503Cu, 0x175044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175044u;
label_175044:
    // 0x175044: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x175044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x175048: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x175048u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x17504c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x17504cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x175050: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x175050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x175054: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x175054u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x175058: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x175058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x17505c: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x17505cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x175060: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x175060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x175064: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x175064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x175068: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x175068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x17506c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x17506cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x175070: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x175070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x175074: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x175074u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 16));
    // 0x175078: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17507c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17507cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x175080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x175084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x175088: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x175088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x17508c: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x17508Cu;
    ctx->pc = 0x175090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17508Cu;
    // 0x175090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x175094u;
}
