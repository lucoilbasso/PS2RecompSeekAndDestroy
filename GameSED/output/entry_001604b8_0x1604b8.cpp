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

// Function: entry_001604b8
// Address: 0x1604b8 - 0x1604d8
void entry_001604b8_0x1604b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001604b8_0x1604b8");
#endif

    ctx->pc = 0x1604b8u;

    // 0x1604b8: 0x14820160  bne         $a0, $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x1604B8u;
    {
        const bool branch_taken_0x1604b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1604BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604B8u;
        // 0x1604bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604b8) {
            ctx->pc = 0x160A3Cu;
            return;
        }
    }
    ctx->pc = 0x1604C0u;
    // 0x1604c0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1604c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1604c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1604c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1604c8: 0xa462a294  sh          $v0, -0x5D6C($v1)
    ctx->pc = 0x1604c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x20A294u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x20A294u, _value); } while (0);
    // 0x1604cc: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x1604CCu;
    {
        const bool branch_taken_0x1604cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604CCu;
        // 0x1604d0: 0xaf858b38  sw          $a1, -0x74C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604cc) {
            ctx->pc = 0x160A3Cu;
            return;
        }
    }
    ctx->pc = 0x1604D4u;
    // 0x1604d4: 0x0  nop
    ctx->pc = 0x1604d4u;
    // NOP
    ctx->pc = 0x1604d8u;
}
