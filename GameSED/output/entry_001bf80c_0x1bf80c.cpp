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

// Function: entry_001bf80c
// Address: 0x1bf80c - 0x1bf924
void entry_001bf80c_0x1bf80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf80c_0x1bf80c");
#endif

    ctx->pc = 0x1bf80cu;

    // 0x1bf80c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf810: 0xf42023  subu        $a0, $a3, $s4
    ctx->pc = 0x1bf810u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1bf814: 0x1a21004  sllv        $v0, $v0, $t5
    ctx->pc = 0x1bf814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf818: 0x1551823  subu        $v1, $t2, $s5
    ctx->pc = 0x1bf818u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x1bf81c: 0xade20010  sw          $v0, 0x10($t7)
    ctx->pc = 0x1bf81cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 2));
    // 0x1bf820: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1bf820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bf824: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1bf824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bf828: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1bf828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bf82c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1bf82cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1bf830: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bf830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bf834: 0x8f080810  lw          $t0, 0x810($t8)
    ctx->pc = 0x1bf834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x1bf838: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x1bf838u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1bf83c: 0x8fac0010  lw          $t4, 0x10($sp)
    ctx->pc = 0x1bf83cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf840: 0x2442dc80  addiu       $v0, $v0, -0x2380
    ctx->pc = 0x1bf840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958208));
    // 0x1bf844: 0x1054018  mult        $t0, $t0, $a1
    ctx->pc = 0x1bf844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1bf848: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1bf848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bf84c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bf84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf850: 0x8a2818  mult        $a1, $a0, $t2
    ctx->pc = 0x1bf850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bf854: 0x18a6818  mult        $t5, $t4, $t2
    ctx->pc = 0x1bf854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1bf858: 0x8fcb0010  lw          $t3, 0x10($fp)
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1bf85c: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x1bf85cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf860: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1bf864: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1bf864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf868: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1bf868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1bf86c: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x1bf86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1bf870: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1bf870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1bf874: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x1bf874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1bf878: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1bf878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf87c: 0x3071821  addu        $v1, $t8, $a3
    ctx->pc = 0x1bf87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x1bf880: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1bf880u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1bf884: 0xac6c05b8  sw          $t4, 0x5B8($v1)
    ctx->pc = 0x1bf884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 12));
    // 0x1bf888: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1bf888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1bf88c: 0x8fac0014  lw          $t4, 0x14($sp)
    ctx->pc = 0x1bf88cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bf890: 0x24c30400  addiu       $v1, $a2, 0x400
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1bf894: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bf894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bf898: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x1bf898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x1bf89c: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x1bf89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1bf8a0: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x1bf8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x1bf8a4: 0x16a6018  mult        $t4, $t3, $t2
    ctx->pc = 0x1bf8a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1bf8a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bf8ac: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x1bf8acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1bf8b0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1bf8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1bf8b4: 0x24a5dca0  addiu       $a1, $a1, -0x2360
    ctx->pc = 0x1bf8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958240));
    // 0x1bf8b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bf8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf8bc: 0xade40014  sw          $a0, 0x14($t7)
    ctx->pc = 0x1bf8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 4));
    // 0x1bf8c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bf8c4: 0xade30018  sw          $v1, 0x18($t7)
    ctx->pc = 0x1bf8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 3));
    // 0x1bf8c8: 0x3072021  addu        $a0, $t8, $a3
    ctx->pc = 0x1bf8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x1bf8cc: 0x1895821  addu        $t3, $t4, $t1
    ctx->pc = 0x1bf8ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x1bf8d0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1bf8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bf8d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1bf8d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8d8: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x1bf8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1bf8dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bf8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf8e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bf8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bf8e4: 0xac890598  sw          $t1, 0x598($a0)
    ctx->pc = 0x1bf8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1432), GPR_U32(ctx, 9));
    // 0x1bf8e8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1bf8e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8ec: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1bf8ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf8f0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1bf8f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf8f4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1bf8f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf8f8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1bf8f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf8fc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1bf8fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf900: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1bf900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf904: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1bf904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf908: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1bf908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf90c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bf90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf910: 0xac6605c8  sw          $a2, 0x5C8($v1)
    ctx->pc = 0x1bf910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1480), GPR_U32(ctx, 6));
    // 0x1bf914: 0xaceb05a8  sw          $t3, 0x5A8($a3)
    ctx->pc = 0x1bf914u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 11));
    // 0x1bf918: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1bf918u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1bf91c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF91Cu;
        // 0x1bf920: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF924u;
}
