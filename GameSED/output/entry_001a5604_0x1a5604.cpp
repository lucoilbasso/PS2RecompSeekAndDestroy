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

// Function: entry_001a5604
// Address: 0x1a5604 - 0x1a5624
void entry_001a5604_0x1a5604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5604_0x1a5604");
#endif

    ctx->pc = 0x1a5604u;

    // 0x1a5604: 0x8e47007c  lw          $a3, 0x7C($s2)
    ctx->pc = 0x1a5604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x1a5608: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x1a5608u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a560c: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x1a560cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5610: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a5610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5614: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1a5614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a5618: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a5618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1a561c: 0x14f20004  bne         $a3, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A561Cu;
    {
        const bool branch_taken_0x1a561c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A561Cu;
        // 0x1a5620: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a561c) {
            ctx->pc = 0x1A5630u;
            return;
        }
    }
    ctx->pc = 0x1A5624u;
}
