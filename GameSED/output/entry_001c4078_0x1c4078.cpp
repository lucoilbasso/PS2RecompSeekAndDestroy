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

// Function: entry_001c4078
// Address: 0x1c4078 - 0x1c40b4
void entry_001c4078_0x1c4078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4078_0x1c4078");
#endif

    ctx->pc = 0x1c4078u;

    // 0x1c4078: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1c4078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1c407c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1c407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c4080: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x1c4080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c4084: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c4084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c4088: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1c4088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c408c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x1c408cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c4090: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x1c4090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1c4094: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c4094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c4098: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c4098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c409c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c409cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c40a0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1c40a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1c40a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C40A4u;
    {
        const bool branch_taken_0x1c40a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40A4u;
        // 0x1c40a8: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40a4) {
            ctx->pc = 0x1C40B4u;
            return;
        }
    }
    ctx->pc = 0x1C40ACu;
    // 0x1c40ac: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1c40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1c40b0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1c40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1c40b4u;
}
