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

// Function: entry_00197074
// Address: 0x197074 - 0x1970b8
void entry_00197074_0x197074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197074_0x197074");
#endif

    switch (ctx->pc) {
        case 0x1970b4u: goto label_1970b4;
        default: break;
    }

    ctx->pc = 0x197074u;

    // 0x197074: 0x8e4803c0  lw          $t0, 0x3C0($s2)
    ctx->pc = 0x197074u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 960)));
    // 0x197078: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x197078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x19707c: 0x8d0201c4  lw          $v0, 0x1C4($t0)
    ctx->pc = 0x19707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 452)));
    // 0x197080: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x197080u;
    {
        const bool branch_taken_0x197080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197080u;
        // 0x197084: 0x264203e0  addiu       $v0, $s2, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197080) {
            ctx->pc = 0x1970B8u;
            return;
        }
    }
    ctx->pc = 0x197088u;
    // 0x197088: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x197088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x19708c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19708cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197090: 0x264303d0  addiu       $v1, $s2, 0x3D0
    ctx->pc = 0x197090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
    // 0x197094: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x197094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x197098: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x197098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x19709c: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x19709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1970a0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1970a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1970a4: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x1970a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1970a8: 0x26070190  addiu       $a3, $s0, 0x190
    ctx->pc = 0x1970a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1970ac: 0xc0622b6  jal         func_188AD8
    ctx->pc = 0x1970ACu;
    SET_GPR_U32(ctx, 31, 0x1970B4u);
    ctx->pc = 0x1970B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970ACu;
    // 0x1970b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188AD8u, 0x1970ACu, 0x1970B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970B4u;
label_1970b4:
    // 0x1970b4: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x1970b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    ctx->pc = 0x1970b8u;
}
