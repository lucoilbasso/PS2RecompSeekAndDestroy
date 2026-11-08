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

// Function: entry_00140240
// Address: 0x140240 - 0x140260
void entry_00140240_0x140240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140240_0x140240");
#endif

    ctx->pc = 0x140240u;

    // 0x140240: 0x8e4501a0  lw          $a1, 0x1A0($s2)
    ctx->pc = 0x140240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x140244: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x140244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x140248: 0xc64c0168  lwc1        $f12, 0x168($s2)
    ctx->pc = 0x140248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14024c: 0x26440084  addiu       $a0, $s2, 0x84
    ctx->pc = 0x14024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x140250: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x140250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x140254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140258: 0xc067c32  jal         func_19F0C8
    ctx->pc = 0x140258u;
    SET_GPR_U32(ctx, 31, 0x140260u);
    ctx->pc = 0x14025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140258u;
    // 0x14025c: 0xae4501a0  sw          $a1, 0x1A0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x140258u, 0x140260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140260u;
}
