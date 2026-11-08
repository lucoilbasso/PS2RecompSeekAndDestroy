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

// Function: entry_00153ba4
// Address: 0x153ba4 - 0x153bd0
void entry_00153ba4_0x153ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153ba4_0x153ba4");
#endif

    switch (ctx->pc) {
        case 0x153bacu: goto label_153bac;
        default: break;
    }

    ctx->pc = 0x153ba4u;

    // 0x153ba4: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x153BA4u;
    SET_GPR_U32(ctx, 31, 0x153BACu);
    ctx->pc = 0x153BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153BA4u;
    // 0x153ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x153BA4u, 0x153BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153BACu;
label_153bac:
    // 0x153bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x153bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153bb0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x153bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x153bb4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x153bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153bb8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153BB8u;
    {
        const bool branch_taken_0x153bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BB8u;
        // 0x153bbc: 0xc62203c4  lwc1        $f2, 0x3C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bb8) {
            ctx->pc = 0x153BD0u;
            return;
        }
    }
    ctx->pc = 0x153BC0u;
    // 0x153bc0: 0x3c013ec0  lui         $at, 0x3EC0
    ctx->pc = 0x153bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16064 << 16));
    // 0x153bc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153bc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x153BC8u;
    {
        const bool branch_taken_0x153bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153bc8) {
            ctx->pc = 0x153BD8u;
            return;
        }
    }
    ctx->pc = 0x153BD0u;
}
