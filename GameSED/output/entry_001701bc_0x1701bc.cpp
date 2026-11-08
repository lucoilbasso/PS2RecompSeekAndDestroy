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

// Function: entry_001701bc
// Address: 0x1701bc - 0x170218
void entry_001701bc_0x1701bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001701bc_0x1701bc");
#endif

    ctx->pc = 0x1701bcu;

    // 0x1701bc: 0x8f8491b0  lw          $a0, -0x6E50($gp)
    ctx->pc = 0x1701bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
    // 0x1701c0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1701c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1701c4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1701c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1701c8: 0xa41026  xor         $v0, $a1, $a0
    ctx->pc = 0x1701c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x1701cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1701ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1701d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1701d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1701d4: 0x28630015  slti        $v1, $v1, 0x15
    ctx->pc = 0x1701d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1701d8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1701D8u;
    {
        const bool branch_taken_0x1701d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1701DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701D8u;
        // 0x1701dc: 0x304209f0  andi        $v0, $v0, 0x9F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2544);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701d8) {
            ctx->pc = 0x170248u;
            return;
        }
    }
    ctx->pc = 0x1701E0u;
    // 0x1701e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1701e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1701e4: 0x1243000c  beq         $s2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1701E4u;
    {
        const bool branch_taken_0x1701e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1701e4) {
            ctx->pc = 0x170218u;
            return;
        }
    }
    ctx->pc = 0x1701ECu;
    // 0x1701ec: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1701ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1701f0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1701F0u;
    {
        const bool branch_taken_0x1701f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F0u;
        // 0x1701f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701f0) {
            ctx->pc = 0x17024Cu;
            return;
        }
    }
    ctx->pc = 0x1701F8u;
    // 0x1701f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1701f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1701fc: 0x5242000a  beql        $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1701FCu;
    {
        const bool branch_taken_0x1701fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1701fc) {
            ctx->pc = 0x170200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1701FCu;
            // 0x170200: 0x30830900  andi        $v1, $a0, 0x900 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2304);
            ctx->in_delay_slot = false;
            ctx->pc = 0x170228u;
            return;
        }
    }
    ctx->pc = 0x170204u;
    // 0x170204: 0x125e000e  beq         $s2, $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x170204u;
    {
        const bool branch_taken_0x170204 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 30));
        ctx->pc = 0x170208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170204u;
        // 0x170208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170204) {
            ctx->pc = 0x170240u;
            return;
        }
    }
    ctx->pc = 0x17020Cu;
    // 0x17020c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17020Cu;
    {
        const bool branch_taken_0x17020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17020c) {
            ctx->pc = 0x17024Cu;
            return;
        }
    }
    ctx->pc = 0x170214u;
    // 0x170214: 0x0  nop
    ctx->pc = 0x170214u;
    // NOP
    ctx->pc = 0x170218u;
}
