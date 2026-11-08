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

// Function: entry_0017f218
// Address: 0x17f218 - 0x17f248
void entry_0017f218_0x17f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f218_0x17f218");
#endif

    ctx->pc = 0x17f218u;

    // 0x17f218: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x17f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17f21c: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x17f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x17f220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f224: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x17f224u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f228: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x17f228u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17f22c: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x17f22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x17f230: 0xb91024  and         $v0, $a1, $t9
    ctx->pc = 0x17f230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 25));
    // 0x17f234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F234u;
    {
        const bool branch_taken_0x17f234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F234u;
        // 0x17f238: 0x8d0b000c  lw          $t3, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f234) {
            ctx->pc = 0x17F248u;
            return;
        }
    }
    ctx->pc = 0x17F23Cu;
    // 0x17f23c: 0x240d0412  addiu       $t5, $zero, 0x412
    ctx->pc = 0x17f23cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x17f240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17F240u;
    {
        const bool branch_taken_0x17f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F240u;
        // 0x17f244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f240) {
            ctx->pc = 0x17F250u;
            return;
        }
    }
    ctx->pc = 0x17F248u;
}
