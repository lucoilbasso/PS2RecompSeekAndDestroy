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
// Address: 0x1c4200 - 0x1c4264
void setD3_CHCR_0x1c4200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD3_CHCR_0x1c4200");
#endif

    switch (ctx->pc) {
        case 0x1c4214u: goto label_1c4214;
        default: break;
    }

    ctx->pc = 0x1c4200u;

    // 0x1c4200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c420c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C420Cu;
    SET_GPR_U32(ctx, 31, 0x1C4214u);
    ctx->pc = 0x1C4210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C420Cu;
    // 0x1c4210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C420Cu, 0x1C4214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4214u;
label_1c4214:
    // 0x1c4214: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c4214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4218: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1c4218u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1c421c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x1c421cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x1c4220: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c4220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4224: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c4224u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1c4228: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x1c4228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x1c422c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c422cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4230: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1c4230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1c4234: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c4234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c4238: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1c4238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x1c423c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c423cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x1c4240: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c4240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c4244: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1c4244u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 16));
    // 0x1c4248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c424c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c424cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1c4250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4254: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c4254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c4258: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c4258u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1c425c: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1C425Cu;
    ctx->pc = 0x1C4260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C425Cu;
    // 0x1c4260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C4264u;
}
