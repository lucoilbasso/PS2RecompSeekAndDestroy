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

// Function: entry_001aa3f0
// Address: 0x1aa3f0 - 0x1aa450
void entry_001aa3f0_0x1aa3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa3f0_0x1aa3f0");
#endif

    switch (ctx->pc) {
        case 0x1aa3f8u: goto label_1aa3f8;
        default: break;
    }

    ctx->pc = 0x1aa3f0u;

    // 0x1aa3f0: 0xc06a91a  jal         func_1AA468
    ctx->pc = 0x1AA3F0u;
    SET_GPR_U32(ctx, 31, 0x1AA3F8u);
    ctx->pc = 0x1AA468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA468u, 0x1AA3F0u, 0x1AA3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3F8u;
label_1aa3f8:
    // 0x1aa3f8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1aa3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1aa3fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa400: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1aa400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1aa404: 0x13302b  sltu        $a2, $zero, $s3
    ctx->pc = 0x1aa404u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1aa408: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1aa408u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa40c: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x1aa40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1aa410: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x1aa410u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1aa414: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1aa414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1aa418: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1aa418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1aa41c: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x1aa41cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1aa420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aa420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aa424: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x1aa424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x1aa428: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1aa428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aa42c: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x1aa42cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1aa430: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1aa430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1aa434: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aa434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa438: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1aa438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa43c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aa43cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa440: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aa440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa448: 0x806bc18  j           func_1AF060
    ctx->pc = 0x1AA448u;
    ctx->pc = 0x1AA44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA448u;
    // 0x1aa44c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF060u;
    SetGsCrt_0x1af060(rdram, ctx, runtime); return;
    ctx->pc = 0x1AA450u;
}
