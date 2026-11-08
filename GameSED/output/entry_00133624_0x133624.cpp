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

// Function: entry_00133624
// Address: 0x133624 - 0x133658
void entry_00133624_0x133624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133624_0x133624");
#endif

    ctx->pc = 0x133624u;

    // 0x133624: 0x1220029f  beqz        $s1, . + 4 + (0x29F << 2)
    ctx->pc = 0x133624u;
    {
        const bool branch_taken_0x133624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133624u;
        // 0x133628: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133624) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x13362Cu;
    // 0x13362c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x13362cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x133630: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133634: 0x5462029c  bnel        $v1, $v0, . + 4 + (0x29C << 2)
    ctx->pc = 0x133634u;
    {
        const bool branch_taken_0x133634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133634) {
            ctx->pc = 0x133638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133634u;
            // 0x133638: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x13363Cu;
    // 0x13363c: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x13363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x133640: 0x312c3  sra         $v0, $v1, 11
    ctx->pc = 0x133640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
    // 0x133644: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x133644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x133648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133648u;
    {
        const bool branch_taken_0x133648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133648u;
        // 0x13364c: 0x313c3  sra         $v0, $v1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133648) {
            ctx->pc = 0x133658u;
            return;
        }
    }
    ctx->pc = 0x133650u;
    // 0x133650: 0x10000294  b           . + 4 + (0x294 << 2)
    ctx->pc = 0x133650u;
    {
        const bool branch_taken_0x133650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133650u;
        // 0x133654: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133650) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133658u;
}
