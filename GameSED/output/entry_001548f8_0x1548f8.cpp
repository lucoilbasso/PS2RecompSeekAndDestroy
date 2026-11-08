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

// Function: entry_001548f8
// Address: 0x1548f8 - 0x154918
void entry_001548f8_0x1548f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001548f8_0x1548f8");
#endif

    ctx->pc = 0x1548f8u;

    // 0x1548f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1548f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1548fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x154900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x154904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x154904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154908: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15490c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15490cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154910: 0x80549fa  j           func_1527E8
    ctx->pc = 0x154910u;
    ctx->pc = 0x154914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154910u;
    // 0x154914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    TankWeaponFire__7ApcTanki_0x1527e8(rdram, ctx, runtime); return;
    ctx->pc = 0x154918u;
}
