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

// Function: entry_00198618
// Address: 0x198618 - 0x198648
void entry_00198618_0x198618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198618_0x198618");
#endif

    ctx->pc = 0x198618u;

    // 0x198618: 0x2473d650  addiu       $s3, $v1, -0x29B0
    ctx->pc = 0x198618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x19861c: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x19861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x198620: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198620u;
    {
        const bool branch_taken_0x198620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198620u;
        // 0x198624: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198620) {
            ctx->pc = 0x198648u;
            return;
        }
    }
    ctx->pc = 0x198628u;
    // 0x198628: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x198628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x19862c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x19862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198630: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x198630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x198634: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x198634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x198638: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x198638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19863c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19863Cu;
    {
        const bool branch_taken_0x19863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19863Cu;
        // 0x198640: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19863c) {
            ctx->pc = 0x19867Cu;
            return;
        }
    }
    ctx->pc = 0x198644u;
    // 0x198644: 0x0  nop
    ctx->pc = 0x198644u;
    // NOP
    ctx->pc = 0x198648u;
}
