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

// Function: entry_0017db14
// Address: 0x17db14 - 0x17db2c
void entry_0017db14_0x17db14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017db14_0x17db14");
#endif

    ctx->pc = 0x17db14u;

    // 0x17db14: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x17db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x17db18: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DB18u;
    {
        const bool branch_taken_0x17db18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17db18) {
            ctx->pc = 0x17DB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DB18u;
            // 0x17db1c: 0x95670010  lhu         $a3, 0x10($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB2Cu;
            return;
        }
    }
    ctx->pc = 0x17DB20u;
    // 0x17db20: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x17db20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x17db24: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x17db24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x17db28: 0x95670010  lhu         $a3, 0x10($t3)
    ctx->pc = 0x17db28u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
    ctx->pc = 0x17db2cu;
}
