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

// Function: viBufAddDMA
// Address: 0x175440 - 0x17563c
void viBufAddDMA_0x175440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufAddDMA_0x175440");
#endif

    switch (ctx->pc) {
        case 0x175478u: goto label_175478;
        case 0x17548cu: goto label_17548c;
        case 0x1754a0u: goto label_1754a0;
        case 0x1754c0u: goto label_1754c0;
        case 0x175570u: goto label_175570;
        case 0x175580u: goto label_175580;
        case 0x1755acu: goto label_1755ac;
        case 0x175604u: goto label_175604;
        case 0x17560cu: goto label_17560c;
        default: break;
    }

    ctx->pc = 0x175440u;

    // 0x175440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x175444: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x175448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17544c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x175450: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x175450u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17545c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x175460: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x175460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x175464: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x175464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x175468: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x175468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17546c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17546cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x175470: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175470u;
    SET_GPR_U32(ctx, 31, 0x175478u);
    ctx->pc = 0x175474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175470u;
    // 0x175474: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175470u, 0x175478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175478u;
label_175478:
    // 0x175478: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x175478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17547c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17547Cu;
    {
        const bool branch_taken_0x17547c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17547Cu;
        // 0x175480: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17547c) {
            ctx->pc = 0x175498u;
            goto label_175498;
        }
    }
    ctx->pc = 0x175484u;
    // 0x175484: 0xc05c246  jal         func_170918
    ctx->pc = 0x175484u;
    SET_GPR_U32(ctx, 31, 0x17548Cu);
    ctx->pc = 0x175488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175484u;
    // 0x175488: 0x24847840  addiu       $a0, $a0, 0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170918u, 0x175484u, 0x17548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17548Cu;
label_17548c:
    // 0x17548c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x17548Cu;
    {
        const bool branch_taken_0x17548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17548Cu;
        // 0x175490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17548c) {
            ctx->pc = 0x175610u;
            goto label_175610;
        }
    }
    ctx->pc = 0x175494u;
    // 0x175494: 0x0  nop
    ctx->pc = 0x175494u;
    // NOP
label_175498:
    // 0x175498: 0xc05d426  jal         func_175098
    ctx->pc = 0x175498u;
    SET_GPR_U32(ctx, 31, 0x1754A0u);
    ctx->pc = 0x17549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175498u;
    // 0x17549c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x175498u, 0x1754A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754A0u;
label_1754a0:
    // 0x1754a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1754a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1754a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1754a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1754a8: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1754a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1754ac: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1754acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1754b0: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1754b0u;
    SET_GPR_S32(ctx, 21, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u));
    // 0x1754b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1754b4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x1754b8: 0xc05d3fc  jal         func_174FF0
    ctx->pc = 0x1754B8u;
    SET_GPR_U32(ctx, 31, 0x1754C0u);
    ctx->pc = 0x1754BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1754B8u;
    // 0x1754bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174FF0u, 0x1754B8u, 0x1754C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754C0u;
label_1754c0:
    // 0x1754c0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1754c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1754c4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1754c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1754c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1754c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1754cc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1754CCu;
    {
        const bool branch_taken_0x1754cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1754cc) {
            ctx->pc = 0x1754D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1754CCu;
            // 0x1754d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1754D4u;
            goto label_1754d4;
        }
    }
    ctx->pc = 0x1754D4u;
label_1754d4:
    // 0x1754d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1754d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1754d8: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1754d8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1754dc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1754dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1754e0: 0x2010  mfhi        $a0
    ctx->pc = 0x1754e0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1754e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1754e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1754e8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1754e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1754ec: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1754ecu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1754f0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1754f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1754f4: 0x2810  mfhi        $a1
    ctx->pc = 0x1754f4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1754f8: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1754f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1754fc: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x1754fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x175500: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x175500u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175504: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x175504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x175508: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x175508u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17550c: 0x248507ff  addiu       $a1, $a0, 0x7FF
    ctx->pc = 0x17550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    // 0x175510: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x175510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175514: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x175514u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x175518: 0x29ac3  sra         $s3, $v0, 11
    ctx->pc = 0x175518u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
    // 0x17551c: 0x131ac0  sll         $v1, $s3, 11
    ctx->pc = 0x17551cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    // 0x175520: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x175520u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x175524: 0x8010  mfhi        $s0
    ctx->pc = 0x175524u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x175528: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x175528u;
    {
        const bool branch_taken_0x175528 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175528u;
        // 0x17552c: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175528) {
            ctx->pc = 0x175570u;
            goto label_175570;
        }
    }
    ctx->pc = 0x175530u;
    // 0x175530: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x175530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x175534: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x175534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x175538: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x175538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17553c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17553Cu;
    {
        const bool branch_taken_0x17553c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x17553c) {
            ctx->pc = 0x175540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17553Cu;
            // 0x175540: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175544u;
            goto label_175544;
        }
    }
    ctx->pc = 0x175544u;
label_175544:
    // 0x175544: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x175544u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175548: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x175548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17554c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x17554cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175550: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x175550u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175554: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x175554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175558: 0x2010  mfhi        $a0
    ctx->pc = 0x175558u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x17555c: 0x42ac0  sll         $a1, $a0, 11
    ctx->pc = 0x17555cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x175560: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x175560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x175564: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x175564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x175568: 0xc05d440  jal         func_175100
    ctx->pc = 0x175568u;
    SET_GPR_U32(ctx, 31, 0x175570u);
    ctx->pc = 0x17556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175568u;
    // 0x17556c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175100u, 0x175568u, 0x175570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175570u;
label_175570:
    // 0x175570: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x175570u;
    {
        const bool branch_taken_0x175570 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x175574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175570u;
        // 0x175574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175570) {
            ctx->pc = 0x1755D4u;
            goto label_1755d4;
        }
    }
    ctx->pc = 0x175578u;
    // 0x175578: 0x2674ffff  addiu       $s4, $s3, -0x1
    ctx->pc = 0x175578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x17557c: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x17557cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_175580:
    // 0x175580: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x175580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175584: 0x2543826  xor         $a3, $s2, $s4
    ctx->pc = 0x175584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
    // 0x175588: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17558c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x17558cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x175590: 0x102ac0  sll         $a1, $s0, 11
    ctx->pc = 0x175590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x175594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175598: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x175598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17559c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x17559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1755a0: 0x2c7300b  movn        $a2, $s6, $a3
    ctx->pc = 0x1755a0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
    // 0x1755a4: 0xc05d440  jal         func_175100
    ctx->pc = 0x1755A4u;
    SET_GPR_U32(ctx, 31, 0x1755ACu);
    ctx->pc = 0x1755A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755A4u;
    // 0x1755a8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175100u, 0x1755A4u, 0x1755ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755ACu;
label_1755ac:
    // 0x1755ac: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1755acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1755b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1755b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1755b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1755b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1755b8: 0x253282a  slt         $a1, $s2, $s3
    ctx->pc = 0x1755b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1755bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1755bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1755c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1755C0u;
    {
        const bool branch_taken_0x1755c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755c0) {
            ctx->pc = 0x1755C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1755C0u;
            // 0x1755c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1755C8u;
            goto label_1755c8;
        }
    }
    ctx->pc = 0x1755C8u;
label_1755c8:
    // 0x1755c8: 0x2010  mfhi        $a0
    ctx->pc = 0x1755c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1755cc: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1755CCu;
    {
        const bool branch_taken_0x1755cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1755D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755CCu;
        // 0x1755d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755cc) {
            ctx->pc = 0x175580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175580;
        }
    }
    ctx->pc = 0x1755D4u;
label_1755d4:
    // 0x1755d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1755d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1755d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1755d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1755dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1755DCu;
    {
        const bool branch_taken_0x1755dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755DCu;
        // 0x1755e0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755dc) {
            ctx->pc = 0x175604u;
            goto label_175604;
        }
    }
    ctx->pc = 0x1755E4u;
    // 0x1755e4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1755E4u;
    {
        const bool branch_taken_0x1755e4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755E4u;
        // 0x1755e8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755e4) {
            ctx->pc = 0x1755FCu;
            goto label_1755fc;
        }
    }
    ctx->pc = 0x1755ECu;
    // 0x1755ec: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1755ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1755f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1755f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1755f4: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x1755f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1755f8: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x1755f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1755fc:
    // 0x1755fc: 0xc05d426  jal         func_175098
    ctx->pc = 0x1755FCu;
    SET_GPR_U32(ctx, 31, 0x175604u);
    ctx->pc = 0x175600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755FCu;
    // 0x175600: 0x36a40100  ori         $a0, $s5, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x1755FCu, 0x175604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175604u;
label_175604:
    // 0x175604: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175604u;
    SET_GPR_U32(ctx, 31, 0x17560Cu);
    ctx->pc = 0x175608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175604u;
    // 0x175608: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175604u, 0x17560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17560Cu;
label_17560c:
    // 0x17560c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175610:
    // 0x175610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17561c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17561cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175620: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x175620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175624: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x175624u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x175628: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x175628u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17562c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17562cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x175630: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x175630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175634: 0x3e00008  jr          $ra
    ctx->pc = 0x175634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175634u;
        // 0x175638: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17563Cu;
}
