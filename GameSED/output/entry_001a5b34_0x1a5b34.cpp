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

// Function: entry_001a5b34
// Address: 0x1a5b34 - 0x1a5b68
void entry_001a5b34_0x1a5b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5b34_0x1a5b34");
#endif

    ctx->pc = 0x1a5b34u;

    // 0x1a5b34: 0x28820c00  slti        $v0, $a0, 0xC00
    ctx->pc = 0x1a5b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a5b38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5B38u;
    {
        const bool branch_taken_0x1a5b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B38u;
        // 0x1a5b3c: 0x28820c40  slti        $v0, $a0, 0xC40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b38) {
            ctx->pc = 0x1A5B68u;
            return;
        }
    }
    ctx->pc = 0x1A5B40u;
    // 0x1a5b40: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x1a5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x1a5b44: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1a5b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a5b48: 0x26c5fb30  addiu       $a1, $s6, -0x4D0
    ctx->pc = 0x1a5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966064));
    // 0x1a5b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a5b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5b50: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1a5b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5b54: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x1a5b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a5b58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5b5c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a5b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5b60: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5B60u;
    {
        const bool branch_taken_0x1a5b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B60u;
        // 0x1a5b64: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b60) {
            ctx->pc = 0x1A5BACu;
            return;
        }
    }
    ctx->pc = 0x1A5B68u;
}
