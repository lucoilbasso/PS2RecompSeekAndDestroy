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

// Function: entry_00102348
// Address: 0x102348 - 0x102378
void entry_00102348_0x102348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102348_0x102348");
#endif

    ctx->pc = 0x102348u;

    // 0x102348: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x102348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10234c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10234cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102354: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x102354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102358: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102358u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10235c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10235cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102360: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102364: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102368: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102368u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10236c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10236cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102370: 0x805fe36  j           func_17F8D8
    ctx->pc = 0x102370u;
    ctx->pc = 0x102374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102370u;
    // 0x102374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    SetModelTexture__7WcModelP7WcImagei_0x17f8d8(rdram, ctx, runtime); return;
    ctx->pc = 0x102378u;
}
