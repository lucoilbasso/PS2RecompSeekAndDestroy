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

// Function: entry_00128dbc
// Address: 0x128dbc - 0x128df0
void entry_00128dbc_0x128dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128dbc_0x128dbc");
#endif

    ctx->pc = 0x128dbcu;

    // 0x128dbc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x128dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x128dc0: 0x2472d650  addiu       $s2, $v1, -0x29B0
    ctx->pc = 0x128dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x128dc4: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x128dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x128dc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128DC8u;
    {
        const bool branch_taken_0x128dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DC8u;
        // 0x128dcc: 0x8fb100b8  lw          $s1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dc8) {
            ctx->pc = 0x128DF0u;
            return;
        }
    }
    ctx->pc = 0x128DD0u;
    // 0x128dd0: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x128dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x128dd4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x128dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128dd8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x128dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x128ddc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x128ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x128de0: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x128de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x128de4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x128DE4u;
    {
        const bool branch_taken_0x128de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DE4u;
        // 0x128de8: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128de4) {
            ctx->pc = 0x128E24u;
            return;
        }
    }
    ctx->pc = 0x128DECu;
    // 0x128dec: 0x0  nop
    ctx->pc = 0x128decu;
    // NOP
    ctx->pc = 0x128df0u;
}
