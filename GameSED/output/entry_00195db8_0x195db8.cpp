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

// Function: entry_00195db8
// Address: 0x195db8 - 0x195dfc
void entry_00195db8_0x195db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195db8_0x195db8");
#endif

    ctx->pc = 0x195db8u;

    // 0x195db8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x195db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x195dbc: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x195dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x195dc0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x195dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x195dc4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x195dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x195dc8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x195dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x195dcc: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x195dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x195dd0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x195dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x195dd4: 0x8e03019c  lw          $v1, 0x19C($s0)
    ctx->pc = 0x195dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x195dd8: 0x8c55001c  lw          $s5, 0x1C($v0)
    ctx->pc = 0x195dd8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x195ddc: 0x94560010  lhu         $s6, 0x10($v0)
    ctx->pc = 0x195ddcu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x195de0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x195de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x195de4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195DE4u;
    {
        const bool branch_taken_0x195de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DE4u;
        // 0x195de8: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195de4) {
            ctx->pc = 0x195DFCu;
            return;
        }
    }
    ctx->pc = 0x195DECu;
    // 0x195dec: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x195decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x195df0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x195df4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x195df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x195df8: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x195df8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x195dfcu;
}
