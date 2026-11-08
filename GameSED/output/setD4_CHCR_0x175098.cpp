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
// Address: 0x175098 - 0x1750fc
void setD4_CHCR_0x175098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD4_CHCR_0x175098");
#endif

    switch (ctx->pc) {
        case 0x1750acu: goto label_1750ac;
        default: break;
    }

    ctx->pc = 0x175098u;

    // 0x175098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17509c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1750a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1750a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1750a4: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1750A4u;
    SET_GPR_U32(ctx, 31, 0x1750ACu);
    ctx->pc = 0x1750A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750A4u;
    // 0x1750a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1750A4u, 0x1750ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750ACu;
label_1750ac:
    // 0x1750ac: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1750acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1750b0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1750b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1750b4: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x1750b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x1750b8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1750b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1750bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1750bcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1750c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1750c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1750c4: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x1750c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x1750c8: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x1750c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x1750cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1750ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1750d0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x1750d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x1750d4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1750d4u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x1750d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1750d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1750dc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1750dcu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16));
    // 0x1750e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1750e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1750e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1750e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1750e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1750e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1750ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1750ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1750f0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1750f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1750f4: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1750F4u;
    ctx->pc = 0x1750F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750F4u;
    // 0x1750f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1750FCu;
}
