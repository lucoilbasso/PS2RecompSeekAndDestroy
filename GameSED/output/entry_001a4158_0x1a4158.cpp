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

// Function: entry_001a4158
// Address: 0x1a4158 - 0x1a4198
void entry_001a4158_0x1a4158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4158_0x1a4158");
#endif

    switch (ctx->pc) {
        case 0x1a4160u: goto label_1a4160;
        default: break;
    }

    ctx->pc = 0x1a4158u;

    // 0x1a4158: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A4158u;
    SET_GPR_U32(ctx, 31, 0x1A4160u);
    ctx->pc = 0x1A415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4158u;
    // 0x1a415c: 0x8f84918c  lw          $a0, -0x6E74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A4158u, 0x1A4160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4160u;
label_1a4160:
    // 0x1a4160: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a4160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4164: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1a4164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1a4168: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a4168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a416c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a416cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a4170: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1a4170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1a4174: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1a4174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1a4178: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x1a4178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a417c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x1a417cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x1a4180: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x1a4180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a4184: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x1a4184u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a4188: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x1a4188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a418c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a418cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a4190: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a4190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a4194: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1a4194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x1a4198u;
}
