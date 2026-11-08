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

// Function: entry_001c16ac
// Address: 0x1c16ac - 0x1c16d8
void entry_001c16ac_0x1c16ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c16ac_0x1c16ac");
#endif

    ctx->pc = 0x1c16acu;

    // 0x1c16ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C16ACu;
    {
        const bool branch_taken_0x1c16ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c16ac) {
            ctx->pc = 0x1C16B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C16ACu;
            // 0x1c16b0: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C16D8u;
            return;
        }
    }
    ctx->pc = 0x1C16B4u;
    // 0x1c16b4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c16b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c16b8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1c16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1c16bc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c16c0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c16c4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1c16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1c16c8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1c16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1c16cc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1c16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1c16d0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c16d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c16d4: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1c16d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    ctx->pc = 0x1c16d8u;
}
