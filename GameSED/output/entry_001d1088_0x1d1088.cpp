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

// Function: entry_001d1088
// Address: 0x1d1088 - 0x1d10a8
void entry_001d1088_0x1d1088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1088_0x1d1088");
#endif

    ctx->pc = 0x1d1088u;

    // 0x1d1088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1088u;
    {
        const bool branch_taken_0x1d1088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1088u;
        // 0x1d108c: 0x2622ffc9  addiu       $v0, $s1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1088) {
            ctx->pc = 0x1D10A8u;
            return;
        }
    }
    ctx->pc = 0x1D1090u;
    // 0x1d1090: 0x2623ffa9  addiu       $v1, $s1, -0x57
    ctx->pc = 0x1d1090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
    // 0x1d1094: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1d1094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1d1098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d109c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D109Cu;
    {
        const bool branch_taken_0x1d109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D109Cu;
        // 0x1d10a0: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d109c) {
            ctx->pc = 0x1D1018u;
            return;
        }
    }
    ctx->pc = 0x1D10A4u;
    // 0x1d10a4: 0x0  nop
    ctx->pc = 0x1d10a4u;
    // NOP
    ctx->pc = 0x1d10a8u;
}
