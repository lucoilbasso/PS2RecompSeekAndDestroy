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

// Function: entry_001aad00
// Address: 0x1aad00 - 0x1aad3c
void entry_001aad00_0x1aad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aad00_0x1aad00");
#endif

    ctx->pc = 0x1aad00u;

    // 0x1aad00: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1aad00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1aad04: 0xde440038  ld          $a0, 0x38($s2)
    ctx->pc = 0x1aad04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1aad08: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x1aad08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1aad0c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1aad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1aad10: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x1aad10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1aad14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aad14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1aad18: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1aad18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1aad1c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1aad1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1aad20: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1aad20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1aad24: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x1aad24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x1aad28: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1aad28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aad2c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aad2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aad30: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x1aad30u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x1aad34: 0xfe440038  sd          $a0, 0x38($s2)
    ctx->pc = 0x1aad34u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 4));
    // 0x1aad38: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1aad38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->pc = 0x1aad3cu;
}
