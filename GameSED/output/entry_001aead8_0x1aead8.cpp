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

// Function: entry_001aead8
// Address: 0x1aead8 - 0x1aeaf8
void entry_001aead8_0x1aead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aead8_0x1aead8");
#endif

    ctx->pc = 0x1aead8u;

    // 0x1aead8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1aead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1aeadc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1aeadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeae0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aeae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aeae4: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x1aeae4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x1aeae8: 0xe2102d  daddu       $v0, $a3, $v0
    ctx->pc = 0x1aeae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1aeaec: 0x30a3000c  andi        $v1, $a1, 0xC
    ctx->pc = 0x1aeaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1aeaf0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AEAF0u;
    {
        const bool branch_taken_0x1aeaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAF0u;
        // 0x1aeaf4: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeaf0) {
            ctx->pc = 0x1AEB14u;
            return;
        }
    }
    ctx->pc = 0x1AEAF8u;
}
