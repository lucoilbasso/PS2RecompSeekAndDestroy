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

// Function: entry_00174168
// Address: 0x174168 - 0x174224
void entry_00174168_0x174168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174168_0x174168");
#endif

    switch (ctx->pc) {
        case 0x1741ecu: goto label_1741ec;
        case 0x1741fcu: goto label_1741fc;
        default: break;
    }

    ctx->pc = 0x174168u;

    // 0x174168: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x174168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17416c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17416cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174170: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174174: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x174174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x174178: 0x2610cd80  addiu       $s0, $s0, -0x3280
    ctx->pc = 0x174178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954368));
    // 0x17417c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17417cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174180: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x174180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x174184: 0x2078024  and         $s0, $s0, $a3
    ctx->pc = 0x174184u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 7));
    // 0x174188: 0x8c8c0030  lw          $t4, 0x30($a0)
    ctx->pc = 0x174188u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17418c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x17418cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174190: 0x24c2001f  addiu       $v0, $a2, 0x1F
    ctx->pc = 0x174190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x174194: 0x24c8003e  addiu       $t0, $a2, 0x3E
    ctx->pc = 0x174194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 62));
    // 0x174198: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x174198u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17419c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x17419cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1741a0: 0x104100b  movn        $v0, $t0, $a0
    ctx->pc = 0x1741a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x1741a4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1741a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1741a8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1741a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1741ac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1741acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1741b0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1741b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1741b4: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x1741b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1741b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1741b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1741bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1741bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1741c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741c4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1741c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1741c8: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x1741c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1741cc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1741ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1741d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1741d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1741d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1741d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1741d8: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1741d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x1741dc: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1741dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x1741e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1741e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1741e4: 0xc05d102  jal         func_174408
    ctx->pc = 0x1741E4u;
    SET_GPR_U32(ctx, 31, 0x1741ECu);
    ctx->pc = 0x1741E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1741E4u;
    // 0x1741e8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174408u, 0x1741E4u, 0x1741ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741ECu;
label_1741ec:
    // 0x1741ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1741ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1741f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741f4: 0xc05d0c0  jal         func_174300
    ctx->pc = 0x1741F4u;
    SET_GPR_U32(ctx, 31, 0x1741FCu);
    ctx->pc = 0x1741F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1741F4u;
    // 0x1741f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174300u, 0x1741F4u, 0x1741FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741FCu;
label_1741fc:
    // 0x1741fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1741fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x174200: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x174200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x174204: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x174204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x174208: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x174208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x17420c: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x17420cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x174210: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x174210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x174214: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x174214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x174218: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x174218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x17421c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x17421cu;
    runtime->Store32(rdram, ctx, 0x1000A010u, GPR_U32(ctx, 16));
    // 0x174220: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x174220u;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 4));
    ctx->pc = 0x174224u;
}
