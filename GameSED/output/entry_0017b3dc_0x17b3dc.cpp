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

// Function: entry_0017b3dc
// Address: 0x17b3dc - 0x17b420
void entry_0017b3dc_0x17b3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b3dc_0x17b3dc");
#endif

    ctx->pc = 0x17b3dcu;

    // 0x17b3dc: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B3DCu;
    {
        const bool branch_taken_0x17b3dc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3DCu;
        // 0x17b3e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3dc) {
            ctx->pc = 0x17B420u;
            return;
        }
    }
    ctx->pc = 0x17B3E4u;
    // 0x17b3e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b3e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b3ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17b3f0: 0x51880a  movz        $s1, $v0, $s1
    ctx->pc = 0x17b3f0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x17b3f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17b3f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17b3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3fc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x17b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17b400: 0x246301a0  addiu       $v1, $v1, 0x1A0
    ctx->pc = 0x17b400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x17b404: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17b404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b408: 0xac730010  sw          $s3, 0x10($v1)
    ctx->pc = 0x17b408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 19));
    // 0x17b40c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x17b40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x17b410: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x17b410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x17b414: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x17b414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x17b418: 0xac740008  sw          $s4, 0x8($v1)
    ctx->pc = 0x17b418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 20));
    // 0x17b41c: 0xac75000c  sw          $s5, 0xC($v1)
    ctx->pc = 0x17b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 21));
    ctx->pc = 0x17b420u;
}
