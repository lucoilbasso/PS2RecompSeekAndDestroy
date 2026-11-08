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

// Function: viBufBeginPut
// Address: 0x175300 - 0x1753f0
void viBufBeginPut_0x175300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufBeginPut_0x175300");
#endif

    switch (ctx->pc) {
        case 0x175338u: goto label_175338;
        default: break;
    }

    ctx->pc = 0x175300u;

    // 0x175300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17530c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175310: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175314: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175318: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x175318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17531c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x175320: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x175320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175324: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x175324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x175328: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x175328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17532c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x175330: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175330u;
    SET_GPR_U32(ctx, 31, 0x175338u);
    ctx->pc = 0x175334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175330u;
    // 0x175334: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175330u, 0x175338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175338u;
label_175338:
    // 0x175338: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x175338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17533c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x17533cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x175340: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x175340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x175344: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x175344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x175348: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x175348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17534c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x17534cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x175350: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x175350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x175354: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x175354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x175358: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175358u;
    {
        const bool branch_taken_0x175358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x175358) {
            ctx->pc = 0x17535Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175358u;
            // 0x17535c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175360u;
            goto label_175360;
        }
    }
    ctx->pc = 0x175360u;
label_175360:
    // 0x175360: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x175360u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175364: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x175364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175368: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x175368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x17536c: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x17536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x175370: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x175370u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x175374: 0x3810  mfhi        $a3
    ctx->pc = 0x175374u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x175378: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17537c: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x17537cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x175380: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x175380u;
    {
        const bool branch_taken_0x175380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175380u;
        // 0x175384: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175380) {
            ctx->pc = 0x1753A0u;
            goto label_1753a0;
        }
    }
    ctx->pc = 0x175388u;
    // 0x175388: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x175388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17538c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x17538cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x175390: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x175390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x175394: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x175394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x175398: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x175398u;
    {
        const bool branch_taken_0x175398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175398u;
        // 0x17539c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175398) {
            ctx->pc = 0x1753CCu;
            goto label_1753cc;
        }
    }
    ctx->pc = 0x1753A0u;
label_1753a0:
    // 0x1753a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1753a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1753a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1753a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1753a8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1753a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1753ac: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1753acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1753b0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1753b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1753b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1753b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1753b8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1753b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1753bc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1753bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1753c0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1753c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1753c4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1753c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1753c8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1753c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1753cc:
    // 0x1753cc: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1753ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1753d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1753d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1753d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1753d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1753d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1753d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1753dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1753e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1753e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1753e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1753e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1753e8: 0x806bd20  j           func_1AF480
    ctx->pc = 0x1753E8u;
    ctx->pc = 0x1753ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753E8u;
    // 0x1753ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    SignalSema_0x1af480(rdram, ctx, runtime); return;
    ctx->pc = 0x1753F0u;
}
