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

// Function: entry_0019c6e4
// Address: 0x19c6e4 - 0x19c714
void entry_0019c6e4_0x19c6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c6e4_0x19c6e4");
#endif

    ctx->pc = 0x19c6e4u;

    // 0x19c6e4: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x19c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x19c6e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19c6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6ec: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19C6ECu;
    {
        const bool branch_taken_0x19c6ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6ECu;
        // 0x19c6f0: 0x3064007f  andi        $a0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6ec) {
            ctx->pc = 0x19C740u;
            return;
        }
    }
    ctx->pc = 0x19C6F4u;
    // 0x19c6f4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x19c6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x19c6f8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x19c6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x19c6fc: 0x90c6f3d8  lbu         $a2, -0xC28($a2)
    ctx->pc = 0x19c6fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294964184)));
    // 0x19c700: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x19C700u;
    {
        const bool branch_taken_0x19c700 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C700u;
        // 0x19c704: 0x24830080  addiu       $v1, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c700) {
            ctx->pc = 0x19C738u;
            return;
        }
    }
    ctx->pc = 0x19C708u;
    // 0x19c708: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x19c708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x19c70c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19c710: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x19c710u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->pc = 0x19c714u;
}
