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

// Function: entry_00138530
// Address: 0x138530 - 0x138558
void entry_00138530_0x138530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138530_0x138530");
#endif

    ctx->pc = 0x138530u;

    // 0x138530: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x138534: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138534u;
    {
        const bool branch_taken_0x138534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x138534) {
            ctx->pc = 0x138538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138534u;
            // 0x138538: 0xc5200004  lwc1        $f0, 0x4($t1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x138558u;
            return;
        }
    }
    ctx->pc = 0x13853Cu;
    // 0x13853c: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x13853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x138540: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x138540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x138548: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x138548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x13854c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x13854Cu;
    {
        const bool branch_taken_0x13854c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13854Cu;
        // 0x138550: 0xaf828a2c  sw          $v0, -0x75D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13854c) {
            ctx->pc = 0x1385F8u;
            return;
        }
    }
    ctx->pc = 0x138554u;
    // 0x138554: 0x0  nop
    ctx->pc = 0x138554u;
    // NOP
    ctx->pc = 0x138558u;
}
