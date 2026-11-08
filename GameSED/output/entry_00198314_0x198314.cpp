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

// Function: entry_00198314
// Address: 0x198314 - 0x19834c
void entry_00198314_0x198314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198314_0x198314");
#endif

    switch (ctx->pc) {
        case 0x19831cu: goto label_19831c;
        case 0x198344u: goto label_198344;
        default: break;
    }

    ctx->pc = 0x198314u;

    // 0x198314: 0xc061422  jal         func_185088
    ctx->pc = 0x198314u;
    SET_GPR_U32(ctx, 31, 0x19831Cu);
    ctx->pc = 0x198318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198314u;
    // 0x198318: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x198314u, 0x19831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19831Cu;
label_19831c:
    // 0x19831c: 0x26820110  addiu       $v0, $s4, 0x110
    ctx->pc = 0x19831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x198320: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x198320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x198324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x198324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19832c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x19832cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x198330: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x198330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x198334: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x198334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x198338: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x198338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x19833c: 0xc0622b6  jal         func_188AD8
    ctx->pc = 0x19833Cu;
    SET_GPR_U32(ctx, 31, 0x198344u);
    ctx->pc = 0x198340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19833Cu;
    // 0x198340: 0x26270190  addiu       $a3, $s1, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188AD8u, 0x19833Cu, 0x198344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198344u;
label_198344:
    // 0x198344: 0xae22022c  sw          $v0, 0x22C($s1)
    ctx->pc = 0x198344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
    // 0x198348: 0x264403c0  addiu       $a0, $s2, 0x3C0
    ctx->pc = 0x198348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
    ctx->pc = 0x19834cu;
}
