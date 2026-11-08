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

// Function: entry_001d1ae4
// Address: 0x1d1ae4 - 0x1d1b00
void entry_001d1ae4_0x1d1ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1ae4_0x1d1ae4");
#endif

    ctx->pc = 0x1d1ae4u;

    // 0x1d1ae4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D1AE4u;
    {
        const bool branch_taken_0x1d1ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE4u;
        // 0x1d1ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ae4) {
            ctx->pc = 0x1D1AB8u;
            return;
        }
    }
    ctx->pc = 0x1D1AECu;
    // 0x1d1aec: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x1d1aecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x1d1af0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1af0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1af4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d1af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1af8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D1AF8u;
    {
        const bool branch_taken_0x1d1af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AF8u;
        // 0x1d1afc: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1af8) {
            ctx->pc = 0x1D1B30u;
            return;
        }
    }
    ctx->pc = 0x1D1B00u;
}
