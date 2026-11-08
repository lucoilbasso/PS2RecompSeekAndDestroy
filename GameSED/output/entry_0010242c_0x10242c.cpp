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

// Function: entry_0010242c
// Address: 0x10242c - 0x102460
void entry_0010242c_0x10242c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010242c_0x10242c");
#endif

    ctx->pc = 0x10242cu;

    // 0x10242c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10242cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102430: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x102430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102434: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102438: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x102438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10243c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10243cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102440: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x102440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102444: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102444u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10244c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10244cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102450: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102454: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x102454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102458: 0x805fe1c  j           func_17F870
    ctx->pc = 0x102458u;
    ctx->pc = 0x10245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102458u;
    // 0x10245c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F870u;
    SetModelTexture__7WcModelP13WModelPackageP7WcImagei_0x17f870(rdram, ctx, runtime); return;
    ctx->pc = 0x102460u;
}
