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

// Function: entry_00153b70
// Address: 0x153b70 - 0x153b90
void entry_00153b70_0x153b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153b70_0x153b70");
#endif

    switch (ctx->pc) {
        case 0x153b88u: goto label_153b88;
        default: break;
    }

    ctx->pc = 0x153b70u;

    // 0x153b70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x153B70u;
    {
        const bool branch_taken_0x153b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B70u;
        // 0x153b74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b70) {
            ctx->pc = 0x153B90u;
            return;
        }
    }
    ctx->pc = 0x153B78u;
    // 0x153b78: 0x92260575  lbu         $a2, 0x575($s1)
    ctx->pc = 0x153b78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1397)));
    // 0x153b7c: 0xc62c03c0  lwc1        $f12, 0x3C0($s1)
    ctx->pc = 0x153b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x153b80: 0xc04c288  jal         func_130A20
    ctx->pc = 0x153B80u;
    SET_GPR_U32(ctx, 31, 0x153B88u);
    ctx->pc = 0x153B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B80u;
    // 0x153b84: 0xc62d03bc  lwc1        $f13, 0x3BC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A20u, 0x153B80u, 0x153B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B88u;
label_153b88:
    // 0x153b88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153B88u;
    {
        const bool branch_taken_0x153b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B88u;
        // 0x153b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b88) {
            ctx->pc = 0x153BA4u;
            return;
        }
    }
    ctx->pc = 0x153B90u;
}
