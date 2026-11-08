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

// Function: entry_00194b24
// Address: 0x194b24 - 0x194b58
void entry_00194b24_0x194b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194b24_0x194b24");
#endif

    switch (ctx->pc) {
        case 0x194b2cu: goto label_194b2c;
        case 0x194b54u: goto label_194b54;
        default: break;
    }

    ctx->pc = 0x194b24u;

    // 0x194b24: 0xc061422  jal         func_185088
    ctx->pc = 0x194B24u;
    SET_GPR_U32(ctx, 31, 0x194B2Cu);
    ctx->pc = 0x194B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B24u;
    // 0x194b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x194B24u, 0x194B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B2Cu;
label_194b2c:
    // 0x194b2c: 0x26820110  addiu       $v0, $s4, 0x110
    ctx->pc = 0x194b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x194b30: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x194b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x194b34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x194b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x194b40: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x194b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x194b44: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x194b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x194b48: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x194b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x194b4c: 0xc0622b6  jal         func_188AD8
    ctx->pc = 0x194B4Cu;
    SET_GPR_U32(ctx, 31, 0x194B54u);
    ctx->pc = 0x194B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B4Cu;
    // 0x194b50: 0x26270190  addiu       $a3, $s1, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188AD8u, 0x194B4Cu, 0x194B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B54u;
label_194b54:
    // 0x194b54: 0xae22022c  sw          $v0, 0x22C($s1)
    ctx->pc = 0x194b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
    ctx->pc = 0x194b58u;
}
