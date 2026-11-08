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

// Function: entry_00153b48
// Address: 0x153b48 - 0x153b70
void entry_00153b48_0x153b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153b48_0x153b48");
#endif

    switch (ctx->pc) {
        case 0x153b64u: goto label_153b64;
        default: break;
    }

    ctx->pc = 0x153b48u;

    // 0x153b48: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x153B48u;
    {
        const bool branch_taken_0x153b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b48) {
            ctx->pc = 0x153B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153B48u;
            // 0x153b4c: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153B70u;
            return;
        }
    }
    ctx->pc = 0x153B50u;
    // 0x153b50: 0xc62c03c0  lwc1        $f12, 0x3C0($s1)
    ctx->pc = 0x153b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x153b54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153b58: 0xc62d03bc  lwc1        $f13, 0x3BC($s1)
    ctx->pc = 0x153b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x153b5c: 0xc04c288  jal         func_130A20
    ctx->pc = 0x153B5Cu;
    SET_GPR_U32(ctx, 31, 0x153B64u);
    ctx->pc = 0x153B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B5Cu;
    // 0x153b60: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A20u, 0x153B5Cu, 0x153B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B64u;
label_153b64:
    // 0x153b64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x153B64u;
    {
        const bool branch_taken_0x153b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B64u;
        // 0x153b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b64) {
            ctx->pc = 0x153BA4u;
            return;
        }
    }
    ctx->pc = 0x153B6Cu;
    // 0x153b6c: 0x0  nop
    ctx->pc = 0x153b6cu;
    // NOP
    ctx->pc = 0x153b70u;
}
