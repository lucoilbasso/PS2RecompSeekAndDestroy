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

// Function: entry_00101b40
// Address: 0x101b40 - 0x101b78
void entry_00101b40_0x101b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101b40_0x101b40");
#endif

    ctx->pc = 0x101b40u;

    // 0x101b40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101b44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101b48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101b50: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x101b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x101b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101b5c: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x101b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x101b60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b64: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101b64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101b68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101b6c: 0x8040438  j           func_1010E0
    ctx->pc = 0x101B6Cu;
    ctx->pc = 0x101B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B6Cu;
    // 0x101b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    ImagePageInfoLoad__9ApcObjRscP10WImageInfoii_0x1010e0(rdram, ctx, runtime); return;
    ctx->pc = 0x101B74u;
    // 0x101b74: 0x0  nop
    ctx->pc = 0x101b74u;
    // NOP
    ctx->pc = 0x101b78u;
}
