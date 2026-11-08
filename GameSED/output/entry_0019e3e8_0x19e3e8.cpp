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

// Function: entry_0019e3e8
// Address: 0x19e3e8 - 0x19e428
void entry_0019e3e8_0x19e3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e3e8_0x19e3e8");
#endif

    ctx->pc = 0x19e3e8u;

    // 0x19e3e8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x19e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x19e3ec: 0x90a70002  lbu         $a3, 0x2($a1)
    ctx->pc = 0x19e3ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x19e3f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19e3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e3f4: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x19e3f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x19e3f8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19e3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e3fc: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x19e3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e400: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E400u;
    {
        const bool branch_taken_0x19e400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E400u;
        // 0x19e404: 0x90a60003  lbu         $a2, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e400) {
            ctx->pc = 0x19E428u;
            return;
        }
    }
    ctx->pc = 0x19E408u;
    // 0x19e408: 0x671023  subu        $v0, $v1, $a3
    ctx->pc = 0x19e408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19e40c: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e40cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e410: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e414: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e418: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19e418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e41c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19E41Cu;
    {
        const bool branch_taken_0x19e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E41Cu;
        // 0x19e420: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e41c) {
            ctx->pc = 0x19E450u;
            return;
        }
    }
    ctx->pc = 0x19E424u;
    // 0x19e424: 0x0  nop
    ctx->pc = 0x19e424u;
    // NOP
    ctx->pc = 0x19e428u;
}
