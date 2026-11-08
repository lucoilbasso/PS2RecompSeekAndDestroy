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

// Function: entry_001ad220
// Address: 0x1ad220 - 0x1ad24c
void entry_001ad220_0x1ad220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad220_0x1ad220");
#endif

    switch (ctx->pc) {
        case 0x1ad240u: goto label_1ad240;
        case 0x1ad248u: goto label_1ad248;
        default: break;
    }

    ctx->pc = 0x1ad220u;

    // 0x1ad220: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ad220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ad224: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1ad224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1ad228: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1ad228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1ad22c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ad22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad230: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x1ad230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ad234: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ad234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad238: 0xc06b40e  jal         func_1AD038
    ctx->pc = 0x1AD238u;
    SET_GPR_U32(ctx, 31, 0x1AD240u);
    ctx->pc = 0x1AD23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD238u;
    // 0x1ad23c: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD038u, 0x1AD238u, 0x1AD240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD240u;
label_1ad240:
    // 0x1ad240: 0xc06b5b0  jal         func_1AD6C0
    ctx->pc = 0x1AD240u;
    SET_GPR_U32(ctx, 31, 0x1AD248u);
    ctx->pc = 0x1AD244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD240u;
    // 0x1ad244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6C0u, 0x1AD240u, 0x1AD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD248u;
label_1ad248:
    // 0x1ad248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ad248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ad24cu;
}
