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

// Function: setD4_CHCR
// Address: 0x1c4570 - 0x1c45d4
void setD4_CHCR_0x1c4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD4_CHCR_0x1c4570");
#endif

    switch (ctx->pc) {
        case 0x1c4584u: goto label_1c4584;
        default: break;
    }

    ctx->pc = 0x1c4570u;

    // 0x1c4570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c457c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C457Cu;
    SET_GPR_U32(ctx, 31, 0x1C4584u);
    ctx->pc = 0x1C4580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C457Cu;
    // 0x1c4580: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C457Cu, 0x1C4584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4584u;
label_1c4584:
    // 0x1c4584: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c4584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4588: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1c4588u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1c458c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x1c458cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x1c4590: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c4590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4594: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c4594u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1c4598: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x1c4598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x1c459c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c459cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c45a0: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1c45a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1c45a4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c45a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c45a8: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1c45a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x1c45ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c45acu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x1c45b0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c45b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c45b4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1c45b4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16));
    // 0x1c45b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c45b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c45bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1c45c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c45c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c45c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c45c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c45c8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1c45cc: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1C45CCu;
    ctx->pc = 0x1C45D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45CCu;
    // 0x1c45d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C45D4u;
}
