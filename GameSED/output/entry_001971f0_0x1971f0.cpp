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

// Function: entry_001971f0
// Address: 0x1971f0 - 0x197220
void entry_001971f0_0x1971f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001971f0_0x1971f0");
#endif

    ctx->pc = 0x1971f0u;

    // 0x1971f0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1971f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1971f4: 0x2474d650  addiu       $s4, $v1, -0x29B0
    ctx->pc = 0x1971f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x1971f8: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1971f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1971fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1971FCu;
    {
        const bool branch_taken_0x1971fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971FCu;
        // 0x197200: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971fc) {
            ctx->pc = 0x197220u;
            return;
        }
    }
    ctx->pc = 0x197204u;
    // 0x197204: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x197204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x197208: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x197208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19720c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19720cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x197210: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x197210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x197214: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x197214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x197218: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x197218u;
    {
        const bool branch_taken_0x197218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197218u;
        // 0x19721c: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197218) {
            ctx->pc = 0x197254u;
            return;
        }
    }
    ctx->pc = 0x197220u;
}
