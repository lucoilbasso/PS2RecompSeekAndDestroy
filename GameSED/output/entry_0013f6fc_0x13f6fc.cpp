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

// Function: entry_0013f6fc
// Address: 0x13f6fc - 0x13f730
void entry_0013f6fc_0x13f6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f6fc_0x13f6fc");
#endif

    ctx->pc = 0x13f6fcu;

    // 0x13f6fc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13f6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13f700: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13F700u;
    {
        const bool branch_taken_0x13f700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f700) {
            ctx->pc = 0x13F704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F700u;
            // 0x13f704: 0x8e26014c  lw          $a2, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F730u;
            return;
        }
    }
    ctx->pc = 0x13F708u;
    // 0x13f708: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x13f708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x13f70c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13f70cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f710: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13f710u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13f714: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x13f714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f718: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x13f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x13f71c: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x13f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x13f720: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x13f720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13f724: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x13f724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13F728u;
    {
        const bool branch_taken_0x13f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F728u;
        // 0x13f72c: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f728) {
            ctx->pc = 0x13F73Cu;
            return;
        }
    }
    ctx->pc = 0x13F730u;
}
